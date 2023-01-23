#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class.h>
#include <Modloader/app/structs/XalService_AsyncBlock_InternalUse_e_FixedBuffer.h>
#include <Modloader/app/structs/XalService_AsyncBlock_InternalUse_e_FixedBuffer__Boxed.h>

namespace app::classes::types {
    namespace XalService_AsyncBlock_InternalUse_e_FixedBuffer {
        namespace {
            inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class* type_info_ref = nullptr;
        }
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class** type_info = &type_info_ref;
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService+AsyncBlock", "<InternalUse>e__FixedBuffer");
        }
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer* create() {
            return il2cpp::create_object<app::XalService_AsyncBlock_InternalUse_e_FixedBuffer>(get_class());
        }
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Boxed* box(app::XalService_AsyncBlock_InternalUse_e_FixedBuffer value) {
            return il2cpp::box_value<app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Boxed>(get_class(), value);
        }
    } // namespace XalService_AsyncBlock_InternalUse_e_FixedBuffer
} // namespace app::classes::types
