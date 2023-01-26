#pragma once
#include <Modloader/app/structs/MessageParserUtility.h>
#include <Modloader/app/structs/MessageParserUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageParserUtility {
        inline app::MessageParserUtility__Class** type_info() {
            static app::MessageParserUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MessageParserUtility__Class**)(modloader::win::memory::resolve_rva(0x0475FBD8));
            }
            return cache;
        }
        inline app::MessageParserUtility__Class* get_class() {
            return il2cpp::get_class<app::MessageParserUtility__Class>(type_info(), "", "MessageParserUtility");
        }
        inline app::MessageParserUtility* create() {
            return il2cpp::create_object<app::MessageParserUtility>(get_class());
        }
    } // namespace MessageParserUtility
} // namespace app::classes::types
