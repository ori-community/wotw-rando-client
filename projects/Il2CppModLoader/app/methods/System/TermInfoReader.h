#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::TermInfoReader {
    IL2CPP_REGISTER_METHOD(0x02444C20, void, ctor_1, (app::TermInfoReader * this_ptr, app::String* term, app::String* filename))
    IL2CPP_REGISTER_METHODINFO(0x04751608, TermInfoReader__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02444E60, void, ctor_2, (app::TermInfoReader * this_ptr, app::String* term, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHODINFO(0x04735F70, TermInfoReader__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02444F60, void, ReadHeader, (app::TermInfoReader * this_ptr, app::Byte__Array* buffer, int32_t* position))
    IL2CPP_REGISTER_METHODINFO(0x0470D490, TermInfoReader_ReadHeader__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02445260, void, ReadNames, (app::TermInfoReader * this_ptr, app::Byte__Array* buffer, int32_t* position))
    IL2CPP_REGISTER_METHOD(0x02445290, int32_t, Get_1, (app::TermInfoReader * this_ptr, app::TermInfoNumbers__Enum number))
    IL2CPP_REGISTER_METHOD(0x024452F0, app::String*, Get_2, (app::TermInfoReader * this_ptr, app::TermInfoStrings__Enum tstr))
    IL2CPP_REGISTER_METHOD(0x02445400, app::Byte__Array*, GetStringBytes_1, (app::TermInfoReader * this_ptr, app::TermInfoStrings__Enum tstr))
    IL2CPP_REGISTER_METHOD(0x02445600, int16_t, GetInt16, (app::TermInfoReader * this_ptr, app::Byte__Array* buffer, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02445680, app::String*, GetString, (app::TermInfoReader * this_ptr, app::Byte__Array* buffer, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02445720, app::Byte__Array*, GetStringBytes_2, (app::TermInfoReader * this_ptr, app::Byte__Array* buffer, int32_t offset))
} // namespace app::classes::System::TermInfoReader
