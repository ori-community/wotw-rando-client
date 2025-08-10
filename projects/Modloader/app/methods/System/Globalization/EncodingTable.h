#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CodePageDataItem.h>
#include <Modloader/app/structs/InternalCodePageDataItem.h>
#include <Modloader/app/structs/InternalEncodingDataItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Globalization::EncodingTable {
    IL2CPP_REGISTER_METHOD(0x02607260, int32_t, GetNumEncodingItems, )
    IL2CPP_REGISTER_METHOD(0x02607310, app::InternalEncodingDataItem, ENC, app::String* name, uint16_t cp)
    IL2CPP_REGISTER_METHOD(0x02607340, app::InternalCodePageDataItem, MapCodePageDataItem, uint16_t cp, uint16_t fcp, app::String* names, uint32_t flags)
    IL2CPP_REGISTER_METHOD(0x02607370, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0260FB60, int32_t, internalGetCodePageFromName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02610060, int32_t, GetCodePageFromName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02610230, app::CodePageDataItem*, GetCodePageDataItem, int32_t codepage)
} // namespace app::classes::System::Globalization::EncodingTable
