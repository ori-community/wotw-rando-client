#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::CADMethodRef {
    IL2CPP_REGISTER_METHOD(0x0230CE10, app::Type__Array*, GetTypes, (app::CADMethodRef * this_ptr, app::String__Array* type_array))
    IL2CPP_REGISTER_METHOD(0x0230CF80, app::MethodBase*, Resolve, (app::CADMethodRef * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047759F8, CADMethodRef_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0230D520, void, ctor, (app::CADMethodRef * this_ptr, app::IMethodMessage* msg))
} // namespace app::classes::System::Runtime::Remoting::Messaging::CADMethodRef
