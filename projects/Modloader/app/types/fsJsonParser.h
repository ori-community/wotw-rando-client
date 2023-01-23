#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsJsonParser__Class.h>
#include <Modloader/app/structs/fsJsonParser.h>

namespace app::classes::types {
    namespace fsJsonParser {
        inline app::fsJsonParser__Class** type_info = (app::fsJsonParser__Class**)(modloader::win::memory::resolve_rva(0x0473E638));
        inline app::fsJsonParser__Class* get_class() {
            return il2cpp::get_class<app::fsJsonParser__Class>(type_info, "FullSerializer", "fsJsonParser");
        }
        inline app::fsJsonParser* create() {
            return il2cpp::create_object<app::fsJsonParser>(get_class());
        }
    } // namespace fsJsonParser
} // namespace app::classes::types
