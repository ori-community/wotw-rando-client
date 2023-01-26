#pragma once
#include <Modloader/app/structs/XalService_AsyncBlock_InternalUse_e_FixedBuffer.h>
#include <Modloader/app/structs/XalService_AsyncBlock_InternalUse_e_FixedBuffer__Boxed.h>
#include <Modloader/app/structs/XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_AsyncBlock_InternalUse_e_FixedBuffer {
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class** type_info() {
            static app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService+AsyncBlock", "<InternalUse>e__FixedBuffer");
        }
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer* create() {
            return il2cpp::create_object<app::XalService_AsyncBlock_InternalUse_e_FixedBuffer>(get_class());
        }
        inline app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Boxed* box(app::XalService_AsyncBlock_InternalUse_e_FixedBuffer value) {
            return il2cpp::box_value<app::XalService_AsyncBlock_InternalUse_e_FixedBuffer__Boxed>(get_class(), value);
        }
    } // namespace XalService_AsyncBlock_InternalUse_e_FixedBuffer
} // namespace app::classes::types
