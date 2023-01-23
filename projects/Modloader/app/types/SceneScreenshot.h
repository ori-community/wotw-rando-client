#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneScreenshot__Class.h>
#include <Modloader/app/structs/SceneScreenshot.h>
#include <Modloader/app/structs/SceneScreenshot__Array.h>

namespace app::classes::types {
    namespace SceneScreenshot {
        inline app::SceneScreenshot__Class** type_info = (app::SceneScreenshot__Class**)(modloader::win::memory::resolve_rva(0x04797EC8));
        inline app::SceneScreenshot__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshot__Class>(type_info, "", "SceneScreenshot");
        }
        inline app::SceneScreenshot* create() {
            return il2cpp::create_object<app::SceneScreenshot>(get_class());
        }
        inline app::SceneScreenshot__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneScreenshot__Array>(get_class(), size);
        }
        inline app::SceneScreenshot__Array* create_array(const std::vector<app::SceneScreenshot*>& items) {
            return il2cpp::array_new<app::SceneScreenshot__Array>(get_class(), items);
        }
    } // namespace SceneScreenshot
} // namespace app::classes::types
