#pragma once
#include <Modloader/app/structs/SwaggerJSONParser.h>
#include <Modloader/app/structs/SwaggerJSONParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwaggerJSONParser {
        inline app::SwaggerJSONParser__Class** type_info() {
            static app::SwaggerJSONParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwaggerJSONParser__Class**)(modloader::win::memory::resolve_rva(0x0476E4F0));
            }
            return cache;
        }
        inline app::SwaggerJSONParser__Class* get_class() {
            return il2cpp::get_class<app::SwaggerJSONParser__Class>(type_info(), "", "SwaggerJSONParser");
        }
        inline app::SwaggerJSONParser* create() {
            return il2cpp::create_object<app::SwaggerJSONParser>(get_class());
        }
    } // namespace SwaggerJSONParser
} // namespace app::classes::types
