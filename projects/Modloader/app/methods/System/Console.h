#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsoleKeyInfo.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/TextWriter.h>

namespace app::classes::System::Console {
    IL2CPP_REGISTER_METHOD(0x02032E80, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x020330A0, void, SetupStreams, app::Encoding* input_encoding, app::Encoding* output_encoding)
    IL2CPP_REGISTER_METHOD(0x020335C0, app::TextWriter*, get_Error, )
    IL2CPP_REGISTER_METHOD(0x02033660, app::TextWriter*, get_Out, )
    IL2CPP_REGISTER_METHOD(0x02033700, app::Stream*, Open, void* handle, app::FileAccess__Enum access, int32_t buffer_size)
    IL2CPP_REGISTER_METHOD(0x020338D0, app::Stream*, OpenStandardError, int32_t buffer_size)
    IL2CPP_REGISTER_METHOD(0x020339B0, app::Stream*, OpenStandardInput, int32_t buffer_size)
    IL2CPP_REGISTER_METHOD(0x02033A90, app::Stream*, OpenStandardOutput, int32_t buffer_size)
    IL2CPP_REGISTER_METHOD(0x02033B70, void, SetOut, app::TextWriter* new_out)
    IL2CPP_REGISTER_METHOD(0x02033C50, app::Encoding*, get_InputEncoding, )
    IL2CPP_REGISTER_METHOD(0x02033CF0, app::Encoding*, get_OutputEncoding, )
    IL2CPP_REGISTER_METHOD(0x02033D90, app::ConsoleKeyInfo, ReadKey_1, )
    IL2CPP_REGISTER_METHOD(0x02033E40, app::ConsoleKeyInfo, ReadKey_2, bool intercept)
    IL2CPP_REGISTER_METHOD(0x02034010, void, DoConsoleCancelEvent, )
} // namespace app::classes::System::Console
