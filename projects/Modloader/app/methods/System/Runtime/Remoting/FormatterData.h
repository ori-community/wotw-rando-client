#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FormatterData.h>

namespace app::classes::System::Runtime::Remoting::FormatterData {
    IL2CPP_REGISTER_METHOD(0x02306450, void, ctor, (app::FormatterData * this_ptr))
}
