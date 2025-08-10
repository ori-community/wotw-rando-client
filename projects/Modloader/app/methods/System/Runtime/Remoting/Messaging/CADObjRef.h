#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CADObjRef.h>
#include <Modloader/app/structs/ObjRef.h>

namespace app::classes::System::Runtime::Remoting::Messaging::CADObjRef {
    IL2CPP_REGISTER_METHOD(0x0230E140, void, ctor, app::CADObjRef* this_ptr, app::ObjRef* o, int32_t source_domain)
}
