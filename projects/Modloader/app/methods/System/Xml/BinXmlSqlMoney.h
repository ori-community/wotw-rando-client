#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::BinXmlSqlMoney {
    IL2CPP_REGISTER_METHOD(0x001DE610, void, ctor_1, (app::BinXmlSqlMoney__Boxed * this_ptr, int32_t v))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_2, (app::BinXmlSqlMoney__Boxed * this_ptr, int64_t v))
    IL2CPP_REGISTER_METHOD(0x001DE620, app::Decimal, ToDecimal, (app::BinXmlSqlMoney__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE650, app::String*, ToString, (app::BinXmlSqlMoney__Boxed * this_ptr))
} // namespace app::classes::System::Xml::BinXmlSqlMoney
