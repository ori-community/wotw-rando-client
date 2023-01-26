#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExceptionProcessor.h>
#include <Modloader/app/structs/ExceptionListener.h>

namespace app::classes::Moon::ExceptionProcessing::ExceptionListener {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ExceptionProcessor*, get_Processor, (app::ExceptionListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Processor, (app::ExceptionListener * this_ptr, app::ExceptionProcessor* value))
    IL2CPP_REGISTER_METHOD(0x019871B0, void, OnEnable, (app::ExceptionListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019873D0, void, OnDisable, (app::ExceptionListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ExceptionListener * this_ptr))
} // namespace app::classes::Moon::ExceptionProcessing::ExceptionListener
