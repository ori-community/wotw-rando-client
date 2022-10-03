#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NewObjectiveMessageProvider {
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, SetMessage, (app::NewObjectiveMessageProvider * this_ptr, app::MessageProvider* message))
    IL2CPP_REGISTER_METHOD(0x005FC1F0, app::IEnumerable_1_MessageDescriptor_*, GetMessages, (app::NewObjectiveMessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::NewObjectiveMessageProvider * this_ptr))
} // namespace app::classes::NewObjectiveMessageProvider
