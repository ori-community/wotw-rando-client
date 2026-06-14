#pragma once
#include <Modloader/app/structs/GlobalRecordingTable.h>
#include <Modloader/app/structs/GlobalRecordingTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalRecordingTable {
        inline app::GlobalRecordingTable__Class** type_info() {
            static app::GlobalRecordingTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GlobalRecordingTable__Class**)(modloader::win::memory::resolve_rva(0x0474A368));
            }
            return cache;
        }
        inline app::GlobalRecordingTable__Class* get_class() {
            return il2cpp::get_class<app::GlobalRecordingTable__Class>(type_info(), "", "GlobalRecordingTable");
        }
        inline app::GlobalRecordingTable* create() {
            return il2cpp::create_object<app::GlobalRecordingTable>(get_class());
        }
    } // namespace GlobalRecordingTable
} // namespace app::classes::types
