#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompatibleComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IHashCodeProvider.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::CompatibleComparer {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::CompatibleComparer* this_ptr, app::IComparer* comparer, app::IHashCodeProvider* hash_code_provider)
    IL2CPP_REGISTER_METHOD(0x02020AA0, int32_t, Compare, app::CompatibleComparer* this_ptr, app::Object* a, app::Object* b)
    IL2CPP_REGISTER_METHOD(0x02020C20, bool, Equals, app::CompatibleComparer* this_ptr, app::Object* a, app::Object* b)
    IL2CPP_REGISTER_METHOD(0x02020D60, int32_t, GetHashCode, app::CompatibleComparer* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IComparer*, get_Comparer, app::CompatibleComparer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IHashCodeProvider*, get_HashCodeProvider, app::CompatibleComparer* this_ptr)
} // namespace app::classes::System::Collections::CompatibleComparer
