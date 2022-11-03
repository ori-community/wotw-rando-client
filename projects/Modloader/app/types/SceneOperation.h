#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneOperation {
        inline app::SceneOperation__Class** type_info = (app::SceneOperation__Class**)(modloader::win::memory::resolve_rva(0x047295A0));
        inline app::SceneOperation__Class* get_class() {
            return il2cpp::get_class<app::SceneOperation__Class>(type_info, "", "SceneOperation");
        }
        inline app::SceneOperation* create() {
            return il2cpp::create_object<app::SceneOperation>(get_class());
        }
        inline app::SceneOperation__Boxed* box(app::SceneOperation value) {
            return il2cpp::box_value<app::SceneOperation__Boxed>(get_class(), value);
        }
        inline app::SceneOperation__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneOperation__Array>(get_class(), size);
        }
        inline app::SceneOperation__Array* create_array(const std::vector<app::SceneOperation>& items) {
            return il2cpp::array_new<app::SceneOperation__Array>(get_class(), items);
        }
    } // namespace SceneOperation
} // namespace app::classes::types
