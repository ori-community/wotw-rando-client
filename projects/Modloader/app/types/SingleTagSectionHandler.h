#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SingleTagSectionHandler__Class.h>
#include <Modloader/app/structs/SingleTagSectionHandler.h>

namespace app::classes::types {
    namespace SingleTagSectionHandler {
        namespace {
            inline app::SingleTagSectionHandler__Class* type_info_ref = nullptr;
        }
        inline app::SingleTagSectionHandler__Class** type_info = &type_info_ref;
        inline app::SingleTagSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::SingleTagSectionHandler__Class>(type_info, "System.Configuration", "SingleTagSectionHandler");
        }
        inline app::SingleTagSectionHandler* create() {
            return il2cpp::create_object<app::SingleTagSectionHandler>(get_class());
        }
    } // namespace SingleTagSectionHandler
} // namespace app::classes::types
