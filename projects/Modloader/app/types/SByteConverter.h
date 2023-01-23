#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SByteConverter__Class.h>
#include <Modloader/app/structs/SByteConverter.h>

namespace app::classes::types {
    namespace SByteConverter {
        namespace {
            inline app::SByteConverter__Class* type_info_ref = nullptr;
        }
        inline app::SByteConverter__Class** type_info = &type_info_ref;
        inline app::SByteConverter__Class* get_class() {
            return il2cpp::get_class<app::SByteConverter__Class>(type_info, "System.ComponentModel", "SByteConverter");
        }
        inline app::SByteConverter* create() {
            return il2cpp::create_object<app::SByteConverter>(get_class());
        }
    } // namespace SByteConverter
} // namespace app::classes::types
