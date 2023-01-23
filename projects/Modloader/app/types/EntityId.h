#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityId__Class.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/EntityId__Boxed.h>
#include <Modloader/app/structs/EntityId__Array.h>

namespace app::classes::types {
    namespace EntityId {
        inline app::EntityId__Class** type_info = (app::EntityId__Class**)(modloader::win::memory::resolve_rva(0x04774920));
        inline app::EntityId__Class* get_class() {
            return il2cpp::get_class<app::EntityId__Class>(type_info, "Moon.Timeline", "EntityId");
        }
        inline app::EntityId* create() {
            return il2cpp::create_object<app::EntityId>(get_class());
        }
        inline app::EntityId__Boxed* box(app::EntityId value) {
            return il2cpp::box_value<app::EntityId__Boxed>(get_class(), value);
        }
        inline app::EntityId__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityId__Array>(get_class(), size);
        }
        inline app::EntityId__Array* create_array(const std::vector<app::EntityId>& items) {
            return il2cpp::array_new<app::EntityId__Array>(get_class(), items);
        }
    } // namespace EntityId
} // namespace app::classes::types
