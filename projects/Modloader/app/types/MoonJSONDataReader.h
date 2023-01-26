#pragma once
#include <Modloader/app/structs/MoonJSONDataReader.h>
#include <Modloader/app/structs/MoonJSONDataReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonJSONDataReader {
        inline app::MoonJSONDataReader__Class** type_info() {
            static app::MoonJSONDataReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonJSONDataReader__Class**)(modloader::win::memory::resolve_rva(0x0472E478));
            }
            return cache;
        }
        inline app::MoonJSONDataReader__Class* get_class() {
            return il2cpp::get_class<app::MoonJSONDataReader__Class>(type_info(), "Moon.Network.Web", "MoonJSONDataReader");
        }
        inline app::MoonJSONDataReader* create() {
            return il2cpp::create_object<app::MoonJSONDataReader>(get_class());
        }
    } // namespace MoonJSONDataReader
} // namespace app::classes::types
