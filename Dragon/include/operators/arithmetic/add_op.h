// --------------------------------------------------------
// Dragon
// Copyright(c) 2017 SeetaTech
// Written by Ting Pan
// --------------------------------------------------------

#ifndef DRAGON_OPERATORS_ARITHMETIC_ADD_OP_H_
#define DRAGON_OPERATORS_ARITHMETIC_ADD_OP_H_

#include "core/operator.h"

namespace dragon {

template <class Context>
class AddOp final : public Operator<Context> {
 public:
    USE_SIMPLE_CTOR_DTOR(AddOp);

    void RunOnDevice() override;
    template <typename T> void EltwiseRunWithType();
    template <typename T> void BroadcastRunWithType(int type);
    
 protected:
    Tensor* bcast_multiplier;
};

template <class Context>
class AddGradientOp final : public Operator<Context> {
 public:
    USE_SIMPLE_CTOR_DTOR(AddGradientOp);

    void ShareBeforeRun() override;
    void RunOnDevice() override;
    void ClearAfterRun() override;
    template <typename T> void EltwiseRunWithType();
    template <typename T> void BroadcastRunWithType(int type);

 protected:
    Tensor* bcast_multiplier;
};

}    // namespace dragon

#endif    // DRAGON_OPERATORS_ARITHMETIC_ADD_OP_H_