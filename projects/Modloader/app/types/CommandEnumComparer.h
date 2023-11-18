#pragma once
#include <Modloader/app/structs/CommandEnumComparer.h>
#include <Modloader/app/structs/CommandEnumComparer__Boxed.h>
#include <Modloader/app/structs/CommandEnumComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommandEnumComparer {
        inline app::CommandEnumComparer__Class** type_info() {
            static app::CommandEnumComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CommandEnumComparer__Class**)(modloader::win::memory::resolve_rva(0x04749FD0));
            }
            return cache;
        }
        inline app::CommandEnumComparer__Class* get_class() {
            return il2cpp::get_class<app::CommandEnumComparer__Class>(type_info(), "", "CommandEnumComparer");
        }
        inline app::CommandEnumComparer* create() {
            return il2cpp::create_object<app::CommandEnumComparer>(get_class());
        }
        inline app::CommandEnumComparer__Boxed* box(app::CommandEnumComparer value) {
            return il2cpp::box_value<app::CommandEnumComparer__Boxed>(get_class(), value);
        }
    } // namespace CommandEnumComparer
} // namespace app::classes::types
