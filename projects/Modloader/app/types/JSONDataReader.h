#pragma once
#include <Modloader/app/structs/JSONDataReader.h>
#include <Modloader/app/structs/JSONDataReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JSONDataReader {
        inline app::JSONDataReader__Class** type_info() {
            static app::JSONDataReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JSONDataReader__Class**)(modloader::win::memory::resolve_rva(0x0474FE50));
            }
            return cache;
        }
        inline app::JSONDataReader__Class* get_class() {
            return il2cpp::get_class<app::JSONDataReader__Class>(type_info(), "Moon.Network.Web", "JSONDataReader");
        }
        inline app::JSONDataReader* create() {
            return il2cpp::create_object<app::JSONDataReader>(get_class());
        }
    } // namespace JSONDataReader
} // namespace app::classes::types
