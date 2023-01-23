#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XText__Class.h>
#include <Modloader/app/structs/XText.h>

namespace app::classes::types {
    namespace XText {
        inline app::XText__Class** type_info = (app::XText__Class**)(modloader::win::memory::resolve_rva(0x047241B0));
        inline app::XText__Class* get_class() {
            return il2cpp::get_class<app::XText__Class>(type_info, "System.Xml.Linq", "XText");
        }
        inline app::XText* create() {
            return il2cpp::create_object<app::XText>(get_class());
        }
    } // namespace XText
} // namespace app::classes::types
