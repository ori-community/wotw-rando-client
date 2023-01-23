#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityKeyMemberConverter__Class.h>
#include <Modloader/app/structs/EntityKeyMemberConverter.h>

namespace app::classes::types {
    namespace EntityKeyMemberConverter {
        inline app::EntityKeyMemberConverter__Class** type_info = (app::EntityKeyMemberConverter__Class**)(modloader::win::memory::resolve_rva(0x0476A5D8));
        inline app::EntityKeyMemberConverter__Class* get_class() {
            return il2cpp::get_class<app::EntityKeyMemberConverter__Class>(type_info, "Newtonsoft.Json.Converters", "EntityKeyMemberConverter");
        }
        inline app::EntityKeyMemberConverter* create() {
            return il2cpp::create_object<app::EntityKeyMemberConverter>(get_class());
        }
    } // namespace EntityKeyMemberConverter
} // namespace app::classes::types
