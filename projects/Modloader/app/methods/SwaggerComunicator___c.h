#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/IRequestCallback.h>
#include <Modloader/app/structs/SwaggerComunicator_c.h>

namespace app::classes::SwaggerComunicator___c {
    IL2CPP_REGISTER_METHOD(0x02EA3400, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SwaggerComunicator_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EA3540, void, _Send_b__6_0, app::SwaggerComunicator_c* this_ptr, app::IRequest* r, app::IRequestCallback* c)
} // namespace app::classes::SwaggerComunicator___c
