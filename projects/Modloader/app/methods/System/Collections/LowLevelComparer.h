#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LowLevelComparer.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::LowLevelComparer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LowLevelComparer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202AFC0, int32_t, Compare, app::LowLevelComparer* this_ptr, app::Object* a, app::Object* b)
    IL2CPP_REGISTER_METHOD(0x0202B110, void, cctor, )
} // namespace app::classes::System::Collections::LowLevelComparer
