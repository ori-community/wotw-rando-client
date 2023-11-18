#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericEqualityComparer_1_System_Guid_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Guid__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x02AB11D0, bool, Equals_1, (app::GenericEqualityComparer_1_System_Guid_ * this_ptr, app::Guid x, app::Guid y))
    IL2CPP_REGISTER_METHOD(0x024350E0, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_System_Guid_ * this_ptr, app::Guid obj))
    IL2CPP_REGISTER_METHOD(0x02AB11F0, int32_t, IndexOf, (app::GenericEqualityComparer_1_System_Guid_ * this_ptr, app::Guid__Array* array, app::Guid value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB1270, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_System_Guid_ * this_ptr, app::Guid__Array* array, app::Guid value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_System_Guid_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_System_Guid_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_System_Guid_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Guid_
