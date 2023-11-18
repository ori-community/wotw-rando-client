#pragma once
#include <Modloader/app/structs/TailoringInfo.h>
#include <Modloader/app/structs/TailoringInfo__Array.h>
#include <Modloader/app/structs/TailoringInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TailoringInfo {
        inline app::TailoringInfo__Class** type_info() {
            static app::TailoringInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TailoringInfo__Class**)(modloader::win::memory::resolve_rva(0x0474A7C0));
            }
            return cache;
        }
        inline app::TailoringInfo__Class* get_class() {
            return il2cpp::get_class<app::TailoringInfo__Class>(type_info(), "Mono.Globalization.Unicode", "TailoringInfo");
        }
        inline app::TailoringInfo* create() {
            return il2cpp::create_object<app::TailoringInfo>(get_class());
        }
        inline app::TailoringInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TailoringInfo__Array>(get_class(), size);
        }
        inline app::TailoringInfo__Array* create_array(const std::vector<app::TailoringInfo*>& items) {
            return il2cpp::array_new<app::TailoringInfo__Array>(get_class(), items);
        }
    } // namespace TailoringInfo
} // namespace app::classes::types
