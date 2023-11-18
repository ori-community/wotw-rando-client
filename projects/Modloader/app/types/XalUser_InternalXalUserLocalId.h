#pragma once
#include <Modloader/app/structs/XalUser_InternalXalUserLocalId.h>
#include <Modloader/app/structs/XalUser_InternalXalUserLocalId__Boxed.h>
#include <Modloader/app/structs/XalUser_InternalXalUserLocalId__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUser_InternalXalUserLocalId {
        inline app::XalUser_InternalXalUserLocalId__Class** type_info() {
            static app::XalUser_InternalXalUserLocalId__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalUser_InternalXalUserLocalId__Class**)(modloader::win::memory::resolve_rva(0x04702060));
            }
            return cache;
        }
        inline app::XalUser_InternalXalUserLocalId__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_InternalXalUserLocalId__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUser", "InternalXalUserLocalId");
        }
        inline app::XalUser_InternalXalUserLocalId* create() {
            return il2cpp::create_object<app::XalUser_InternalXalUserLocalId>(get_class());
        }
        inline app::XalUser_InternalXalUserLocalId__Boxed* box(app::XalUser_InternalXalUserLocalId value) {
            return il2cpp::box_value<app::XalUser_InternalXalUserLocalId__Boxed>(get_class(), value);
        }
    } // namespace XalUser_InternalXalUserLocalId
} // namespace app::classes::types
