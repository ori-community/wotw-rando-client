#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IClippable__Class.h>
#include <Modloader/app/structs/IClippable__Array.h>
#include <Modloader/app/structs/IClippable.h>

namespace app::classes::types {
    namespace IClippable {
        inline app::IClippable__Class** type_info = (app::IClippable__Class**)(modloader::win::memory::resolve_rva(0x0478E4A0));
        inline app::IClippable__Class* get_class() {
            return il2cpp::get_class<app::IClippable__Class>(type_info, "UnityEngine.UI", "IClippable");
        }
        inline app::IClippable__Array* create_array(int size) {
            return il2cpp::array_new<app::IClippable__Array>(get_class(), size);
        }
        inline app::IClippable__Array* create_array(const std::vector<app::IClippable*>& items) {
            return il2cpp::array_new<app::IClippable__Array>(get_class(), items);
        }
    } // namespace IClippable
} // namespace app::classes::types
