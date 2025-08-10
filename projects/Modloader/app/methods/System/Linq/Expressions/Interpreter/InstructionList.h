#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BranchLabel.h>
#include <Modloader/app/structs/ByRefUpdater__Array.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/EnterTryFaultInstruction.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/InstructionArray.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/LightDelegateCreator.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OffsetInstruction.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#include <Modloader/app/structs/StrongBox_1_System_Int32_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InstructionList {
    IL2CPP_REGISTER_METHOD(0x01CD7DE0, void, Emit, app::InstructionList* this_ptr, app::Instruction* instruction)
    IL2CPP_REGISTER_METHOD(0x01CD7F10, void, UpdateStackDepth, app::InstructionList* this_ptr, app::Instruction* instruction)
    IL2CPP_REGISTER_METHOD(0x01CD7FC0, void, UnEmit, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD8110, int32_t, get_Count, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_CurrentStackDepth, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_CurrentContinuationsDepth, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD81A0, app::Instruction*, GetInstruction, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CD8250, app::InstructionArray, ToArray, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD8350, void, EmitLoad_1, app::InstructionList* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01CD8360, void, EmitLoad_2, app::InstructionList* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01CD86E0, void, EmitLoad_3, app::InstructionList* this_ptr, app::Object* value, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CD8FD0, void, EmitDup, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD9080, void, EmitPop, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD9130, void, SwitchToBoxed, app::InstructionList* this_ptr, int32_t index, int32_t instruction_index)
    IL2CPP_REGISTER_METHOD(0x01CD9260, void, EmitLoadLocal, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CD9630, void, EmitLoadLocalBoxed, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CD96F0, app::Instruction*, LoadLocalBoxed, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CD9AA0, void, EmitLoadLocalFromClosure, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CD9E70, void, EmitLoadLocalFromClosureBoxed, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDA240, void, EmitAssignLocal, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDA610, void, EmitStoreLocal, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDA9E0, void, EmitAssignLocalBoxed, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDAAA0, app::Instruction*, AssignLocalBoxed, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDAE50, void, EmitStoreLocalBoxed, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDAF10, app::Instruction*, StoreLocalBoxed, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDB2C0, void, EmitAssignLocalToClosure, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDB690, void, EmitStoreLocalToClosure, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDB6B0, void, EmitInitializeLocal, app::InstructionList* this_ptr, int32_t index, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDBA50, void, EmitInitializeParameter, app::InstructionList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDBC20, app::Instruction*, Parameter, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDBD60, app::Instruction*, ParameterBox, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDBEA0, app::Instruction*, InitReference, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDBFE0, app::Instruction*, InitImmutableRefBox, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CDC120, void, EmitNewRuntimeVariables, app::InstructionList* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01CDC280, void, EmitGetArrayItem, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDC330, void, EmitSetArrayItem, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDC3E0, void, EmitNewArray, app::InstructionList* this_ptr, app::Type* element_type)
    IL2CPP_REGISTER_METHOD(0x01CDC530, void, EmitNewArrayBounds, app::InstructionList* this_ptr, app::Type* element_type, int32_t rank)
    IL2CPP_REGISTER_METHOD(0x01CDC690, void, EmitNewArrayInit, app::InstructionList* this_ptr, app::Type* element_type, int32_t element_count)
    IL2CPP_REGISTER_METHOD(0x01CDC7F0, void, EmitAdd, app::InstructionList* this_ptr, app::Type* type, bool checked)
    IL2CPP_REGISTER_METHOD(0x01CDC830, void, EmitSub, app::InstructionList* this_ptr, app::Type* type, bool checked)
    IL2CPP_REGISTER_METHOD(0x01CDC870, void, EmitMul, app::InstructionList* this_ptr, app::Type* type, bool checked)
    IL2CPP_REGISTER_METHOD(0x01CDC8B0, void, EmitDiv, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDC8E0, void, EmitModulo, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDC910, void, EmitExclusiveOr, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDC940, void, EmitAnd, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDC970, void, EmitOr, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDC9A0, void, EmitLeftShift, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDC9D0, void, EmitRightShift, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDCA00, void, EmitEqual, app::InstructionList* this_ptr, app::Type* type, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CDCA40, void, EmitNotEqual, app::InstructionList* this_ptr, app::Type* type, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CDCA80, void, EmitLessThan, app::InstructionList* this_ptr, app::Type* type, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CDCAC0, void, EmitLessThanOrEqual, app::InstructionList* this_ptr, app::Type* type, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CDCB00, void, EmitGreaterThan, app::InstructionList* this_ptr, app::Type* type, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CDCB40, void, EmitGreaterThanOrEqual, app::InstructionList* this_ptr, app::Type* type, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(
        0x01CDCB80,
        void,
        EmitNumericConvertChecked,
        app::InstructionList* this_ptr,
        app::TypeCode__Enum from,
        app::TypeCode__Enum to,
        bool is_lifted_to_null
    )
    IL2CPP_REGISTER_METHOD(
        0x01CDCCF0,
        void,
        EmitNumericConvertUnchecked,
        app::InstructionList* this_ptr,
        app::TypeCode__Enum from,
        app::TypeCode__Enum to,
        bool is_lifted_to_null
    )
    IL2CPP_REGISTER_METHOD(0x01CDCE60, void, EmitConvertToUnderlying, app::InstructionList* this_ptr, app::TypeCode__Enum to, bool is_lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CDCFD0, void, EmitCast, app::InstructionList* this_ptr, app::Type* to_type)
    IL2CPP_REGISTER_METHOD(0x01CDD000, void, EmitCastToEnum, app::InstructionList* this_ptr, app::Type* to_type)
    IL2CPP_REGISTER_METHOD(0x01CDD150, void, EmitCastReferenceToEnum, app::InstructionList* this_ptr, app::Type* to_type)
    IL2CPP_REGISTER_METHOD(0x01CDD2A0, void, EmitNot, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDD2D0, void, EmitDefaultValue, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x01CDD420,
        void,
        EmitNew,
        app::InstructionList* this_ptr,
        app::ConstructorInfo* constructor_info,
        app::ParameterInfo_1__Array* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x01CDD5A0,
        void,
        EmitByRefNew,
        app::InstructionList* this_ptr,
        app::ConstructorInfo* constructor_info,
        app::ParameterInfo_1__Array* parameters,
        app::ByRefUpdater__Array* updaters
    )
    IL2CPP_REGISTER_METHOD(0x01CDD720, void, EmitCreateDelegate, app::InstructionList* this_ptr, app::LightDelegateCreator* creator)
    IL2CPP_REGISTER_METHOD(0x01CDD870, void, EmitTypeEquals, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDD920, void, EmitArrayLength, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDD9D0, void, EmitNegate, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDDA00, void, EmitNegateChecked, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDDA30, void, EmitIncrement, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDDA60, void, EmitDecrement, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDDA90, void, EmitTypeIs, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDDBE0, void, EmitTypeAs, app::InstructionList* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CDDD30, void, EmitLoadField, app::InstructionList* this_ptr, app::FieldInfo_1* field)
    IL2CPP_REGISTER_METHOD(0x01CDDD60, app::Instruction*, GetLoadField, app::InstructionList* this_ptr, app::FieldInfo_1* field)
    IL2CPP_REGISTER_METHOD(0x01CDE1B0, void, EmitStoreField, app::InstructionList* this_ptr, app::FieldInfo_1* field)
    IL2CPP_REGISTER_METHOD(0x01CDE380, void, EmitCall_1, app::InstructionList* this_ptr, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x01CDE450, void, EmitCall_2, app::InstructionList* this_ptr, app::MethodInfo_1* method_1, app::ParameterInfo_1__Array* parameters)
    IL2CPP_REGISTER_METHOD(
        0x01CDE480,
        void,
        EmitByRefCall,
        app::InstructionList* this_ptr,
        app::MethodInfo_1* method_1,
        app::ParameterInfo_1__Array* parameters,
        app::ByRefUpdater__Array* byref_args
    )
    IL2CPP_REGISTER_METHOD(
        0x01CDE650,
        void,
        EmitNullableCall,
        app::InstructionList* this_ptr,
        app::MethodInfo_1* method_1,
        app::ParameterInfo_1__Array* parameters
    )
    IL2CPP_REGISTER_METHOD(0x01CDE6C0, app::RuntimeLabel__Array*, BuildRuntimeLabels, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDE920, app::BranchLabel*, MakeLabel, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDEB70, void, FixupBranch, app::InstructionList* this_ptr, int32_t branch_index, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x01CDED90, int32_t, EnsureLabelIndex, app::InstructionList* this_ptr, app::BranchLabel* label)
    IL2CPP_REGISTER_METHOD(0x01CDEDC0, int32_t, MarkRuntimeLabel, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDEE20, void, MarkLabel, app::InstructionList* this_ptr, app::BranchLabel* label)
    IL2CPP_REGISTER_METHOD(
        0x01CDEE50,
        void,
        EmitGoto,
        app::InstructionList* this_ptr,
        app::BranchLabel* label,
        bool has_result,
        bool has_value,
        bool label_target_gets_value
    )
    IL2CPP_REGISTER_METHOD(0x01CDEF60, void, EmitBranch_1, app::InstructionList* this_ptr, app::OffsetInstruction* instruction, app::BranchLabel* label)
    IL2CPP_REGISTER_METHOD(0x01CDEFB0, void, EmitBranch_2, app::InstructionList* this_ptr, app::BranchLabel* label)
    IL2CPP_REGISTER_METHOD(0x01CDF130, void, EmitBranch_3, app::InstructionList* this_ptr, app::BranchLabel* label, bool has_result, bool has_value)
    IL2CPP_REGISTER_METHOD(0x01CDF2D0, void, EmitCoalescingBranch, app::InstructionList* this_ptr, app::BranchLabel* left_not_null)
    IL2CPP_REGISTER_METHOD(0x01CDF450, void, EmitBranchTrue, app::InstructionList* this_ptr, app::BranchLabel* else_label)
    IL2CPP_REGISTER_METHOD(0x01CDF5D0, void, EmitBranchFalse, app::InstructionList* this_ptr, app::BranchLabel* else_label)
    IL2CPP_REGISTER_METHOD(0x01CDF750, void, EmitThrow, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDF800, void, EmitThrowVoid, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDF8B0, void, EmitRethrow, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDF960, void, EmitRethrowVoid, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDFA10, void, EmitEnterTryFinally, app::InstructionList* this_ptr, app::BranchLabel* finally_start_label)
    IL2CPP_REGISTER_METHOD(0x01CDFB90, void, EmitEnterTryCatch, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDFCE0, app::EnterTryFaultInstruction*, EmitEnterTryFault, app::InstructionList* this_ptr, app::BranchLabel* try_end)
    IL2CPP_REGISTER_METHOD(0x01CDFE60, void, EmitEnterFinally, app::InstructionList* this_ptr, app::BranchLabel* finally_start_label)
    IL2CPP_REGISTER_METHOD(0x01CDFF40, void, EmitLeaveFinally, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CDFFF0, void, EmitEnterFault, app::InstructionList* this_ptr, app::BranchLabel* fault_start_label)
    IL2CPP_REGISTER_METHOD(0x01CE00D0, void, EmitLeaveFault, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE0180, void, EmitEnterExceptionFilter, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE0230, void, EmitLeaveExceptionFilter, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE02E0, void, EmitEnterExceptionHandlerNonVoid, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE0390, void, EmitEnterExceptionHandlerVoid, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01CE0440,
        void,
        EmitLeaveExceptionHandler,
        app::InstructionList* this_ptr,
        bool has_value,
        app::BranchLabel* try_expression_end_label
    )
    IL2CPP_REGISTER_METHOD(
        0x01CE0530,
        void,
        EmitStringSwitch,
        app::InstructionList* this_ptr,
        app::Dictionary_2_System_String_System_Int32_* cases,
        app::StrongBox_1_System_Int32_* null_case
    )
    IL2CPP_REGISTER_METHOD(0x01CE0690, void, ctor, app::InstructionList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE07E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01AEFF70, void, EmitIntSwitch_1, app::InstructionList* this_ptr, app::Dictionary_2_System_Object_System_Int32_* cases)
    IL2CPP_REGISTER_METHOD(0x01AEFF70, void, EmitIntSwitch_2, app::InstructionList* this_ptr, app::Dictionary_2_System_Int32_System_Int32_* cases)
} // namespace app::classes::System::Linq::Expressions::Interpreter::InstructionList
