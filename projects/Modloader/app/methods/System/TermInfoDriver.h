#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TermInfoDriver.h>
#include <Modloader/app/structs/ConsoleKeyInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/TermInfoStrings__Enum.h>

namespace app::classes::System::TermInfoDriver {
    IL2CPP_REGISTER_METHOD(0x0243E7C0, app::String*, TryTermInfoDir, (app::String * dir, app::String* term))
    IL2CPP_REGISTER_METHOD(0x0243E950, app::String*, SearchTerminfo, (app::String * term))
    IL2CPP_REGISTER_METHOD(0x0243EB20, void, WriteConsole, (app::TermInfoDriver * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x0243EB50, void, ctor, (app::TermInfoDriver * this_ptr, app::String* term))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_Initialized, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243F470, void, Init, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761770, TermInfoDriver_Init__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243FD80, void, IncrementX, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243FE10, void, WriteSpecialKey_1, (app::TermInfoDriver * this_ptr, app::ConsoleKeyInfo key))
    IL2CPP_REGISTER_METHOD(0x02440030, void, WriteSpecialKey_2, (app::TermInfoDriver * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x02440080, bool, IsSpecialKey_1, (app::TermInfoDriver * this_ptr, app::ConsoleKeyInfo key))
    IL2CPP_REGISTER_METHOD(0x02440120, bool, IsSpecialKey_2, (app::TermInfoDriver * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x024401F0, void, GetCursorPosition, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024402E0, void, CheckWindowDimensions, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02440530, int32_t, get_WindowHeight, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02440560, int32_t, get_WindowWidth, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02440590, void, AddToBuffer, (app::TermInfoDriver * this_ptr, int32_t b))
    IL2CPP_REGISTER_METHOD(0x024406D0, void, AdjustBuffer, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024406F0, app::ConsoleKeyInfo, CreateKeyInfoFromInt, (app::TermInfoDriver * this_ptr, int32_t n, bool alt))
    IL2CPP_REGISTER_METHOD(0x02440820, app::Object*, GetKeyFromBuffer, (app::TermInfoDriver * this_ptr, bool cooked))
    IL2CPP_REGISTER_METHOD(0x02440C80, app::ConsoleKeyInfo, ReadKeyInternal, (app::TermInfoDriver * this_ptr, bool* fresh))
    IL2CPP_REGISTER_METHOD(0x02440E80, bool, InputPending, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02440EC0, void, QueueEcho, (app::TermInfoDriver * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x02441010, void, Echo, (app::TermInfoDriver * this_ptr, app::ConsoleKeyInfo key))
    IL2CPP_REGISTER_METHOD(0x02441250, void, EchoFlush, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024412A0, int32_t, Read, (app::TermInfoDriver * this_ptr, app::Char__Array* dest, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02441920, app::ConsoleKeyInfo, ReadKey, (app::TermInfoDriver * this_ptr, bool intercept))
    IL2CPP_REGISTER_METHOD(0x024419D0, app::String*, ReadLine, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024419E0, app::String*, ReadToEnd, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024419F0, app::String*, ReadUntilConditionInternal, (app::TermInfoDriver * this_ptr, bool halt_on_new_line))
    IL2CPP_REGISTER_METHOD(0x02441DA0, void, SetCursorPosition, (app::TermInfoDriver * this_ptr, int32_t left, int32_t top))
    IL2CPP_REGISTER_METHODINFO(0x04777CB0, TermInfoDriver_SetCursorPosition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02441FF0, void, CreateKeyMap, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024446C0, void, InitKeys, (app::TermInfoDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02444970, void, AddStringMapping, (app::TermInfoDriver * this_ptr, app::TermInfoStrings__Enum s))
    IL2CPP_REGISTER_METHOD(0x024449D0, void, cctor, ())
} // namespace app::classes::System::TermInfoDriver
