#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor.h>
#include <Modloader/app/structs/IEnumerable_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_DynamicInstantiationDescriptor_.h>

namespace app::classes::System::Collections::Generic::List_1_DynamicInstantiationDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_DynamicInstantiationDescriptor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_DynamicInstantiationDescriptor_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, (app::List_1_DynamicInstantiationDescriptor_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_DynamicInstantiationDescriptor_ * this_ptr, app::IEnumerable_1_DynamicInstantiationDescriptor_* collection))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_DynamicInstantiationDescriptor_ * this_ptr, app::DynamicInstantiationDescriptor* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_DynamicInstantiationDescriptor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_DynamicInstantiationDescriptor_, GetEnumerator, (app::List_1_DynamicInstantiationDescriptor_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_DynamicInstantiationDescriptor_
