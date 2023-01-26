#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_ICanActivatePressurePlate_.h>
#include <Modloader/app/structs/ICanActivatePressurePlate.h>
#include <Modloader/app/structs/List_1_ICanActivatePressurePlate_.h>
#include <Modloader/app/structs/Predicate_1_ICanActivatePressurePlate_.h>

namespace app::classes::System::Collections::Generic::List_1_ICanActivatePressurePlate_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_ICanActivatePressurePlate_, GetEnumerator, (app::List_1_ICanActivatePressurePlate_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::ICanActivatePressurePlate*, Find, (app::List_1_ICanActivatePressurePlate_ * this_ptr, app::Predicate_1_ICanActivatePressurePlate_* match))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ICanActivatePressurePlate_ * this_ptr, app::ICanActivatePressurePlate* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ICanActivatePressurePlate_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_ICanActivatePressurePlate_ * this_ptr, app::ICanActivatePressurePlate* item))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_ICanActivatePressurePlate_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_ICanActivatePressurePlate_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_ICanActivatePressurePlate_
