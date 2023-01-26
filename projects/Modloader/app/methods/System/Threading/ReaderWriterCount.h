#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReaderWriterCount.h>

namespace app::classes::System::Threading::ReaderWriterCount {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReaderWriterCount * this_ptr))
}
