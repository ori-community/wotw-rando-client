#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CompatibleComparer_1.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IHashCodeProvider.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::CompatibleComparer {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::CompatibleComparer_1 * this_ptr, app::IComparer* comparer, app::IHashCodeProvider* hash_code_provider))
    IL2CPP_REGISTER_METHOD(0x02492CB0, bool, Equals, (app::CompatibleComparer_1 * this_ptr, app::Object* a, app::Object* b))
    IL2CPP_REGISTER_METHOD(0x02492E00, int32_t, GetHashCode, (app::CompatibleComparer_1 * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x04771EC8, CompatibleComparer_1_GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IComparer*, get_Comparer, (app::CompatibleComparer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IHashCodeProvider*, get_HashCodeProvider, (app::CompatibleComparer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02492EF0, app::IComparer*, get_DefaultComparer, ())
    IL2CPP_REGISTER_METHOD(0x024930B0, app::IHashCodeProvider*, get_DefaultHashCodeProvider, ())
} // namespace app::classes::System::Collections::Specialized::CompatibleComparer
