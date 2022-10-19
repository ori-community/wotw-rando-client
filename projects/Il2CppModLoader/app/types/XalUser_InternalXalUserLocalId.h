#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUser_InternalXalUserLocalId {
        inline app::XalUser_InternalXalUserLocalId__Class** type_info = (app::XalUser_InternalXalUserLocalId__Class**)(modloader::win::memory::resolve_rva(0x04702060));
        inline app::XalUser_InternalXalUserLocalId__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_InternalXalUserLocalId__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser", "InternalXalUserLocalId");
        }
        inline app::XalUser_InternalXalUserLocalId* create() {
            return il2cpp::create_object<app::XalUser_InternalXalUserLocalId>(get_class());
        }
        inline app::XalUser_InternalXalUserLocalId__Boxed* box(app::XalUser_InternalXalUserLocalId value) {
            return il2cpp::box_value<app::XalUser_InternalXalUserLocalId__Boxed>(get_class(), value);
        }
    } // namespace XalUser_InternalXalUserLocalId
} // namespace app::classes::types
