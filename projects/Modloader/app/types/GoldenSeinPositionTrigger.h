#pragma once
#include <Modloader/app/structs/GoldenSeinPositionTrigger.h>
#include <Modloader/app/structs/GoldenSeinPositionTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoldenSeinPositionTrigger {
        inline app::GoldenSeinPositionTrigger__Class** type_info() {
            static app::GoldenSeinPositionTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GoldenSeinPositionTrigger__Class**)(modloader::win::memory::resolve_rva(0x04739D70));
            }
            return cache;
        }
        inline app::GoldenSeinPositionTrigger__Class* get_class() {
            return il2cpp::get_class<app::GoldenSeinPositionTrigger__Class>(type_info(), "", "GoldenSeinPositionTrigger");
        }
        inline app::GoldenSeinPositionTrigger* create() {
            return il2cpp::create_object<app::GoldenSeinPositionTrigger>(get_class());
        }
    } // namespace GoldenSeinPositionTrigger
} // namespace app::classes::types
