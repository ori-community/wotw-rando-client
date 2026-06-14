#pragma once
#include <Modloader/app/structs/XDRSchema.h>
#include <Modloader/app/structs/XDRSchema__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XDRSchema {
        inline app::XDRSchema__Class** type_info() {
            static app::XDRSchema__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XDRSchema__Class**)(modloader::win::memory::resolve_rva(0x047593F0));
            }
            return cache;
        }
        inline app::XDRSchema__Class* get_class() {
            return il2cpp::get_class<app::XDRSchema__Class>(type_info(), "System.Data", "XDRSchema");
        }
        inline app::XDRSchema* create() {
            return il2cpp::create_object<app::XDRSchema>(get_class());
        }
    } // namespace XDRSchema
} // namespace app::classes::types
