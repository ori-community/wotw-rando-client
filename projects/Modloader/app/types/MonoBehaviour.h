#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoBehaviour__Class.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/MonoBehaviour__Array.h>

namespace app::classes::types {
    namespace MonoBehaviour {
        inline app::MonoBehaviour__Class** type_info = (app::MonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04730D98));
        inline app::MonoBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MonoBehaviour__Class>(type_info, "UnityEngine", "MonoBehaviour");
        }
        inline app::MonoBehaviour* create() {
            return il2cpp::create_object<app::MonoBehaviour>(get_class());
        }
        inline app::MonoBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::MonoBehaviour__Array>(get_class(), size);
        }
        inline app::MonoBehaviour__Array* create_array(const std::vector<app::MonoBehaviour*>& items) {
            return il2cpp::array_new<app::MonoBehaviour__Array>(get_class(), items);
        }
    } // namespace MonoBehaviour
} // namespace app::classes::types
