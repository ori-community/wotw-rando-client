#pragma once
#include <Modloader/app/structs/IGlobalRecordingTableReceiver.h>
#include <Modloader/app/structs/IGlobalRecordingTableReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGlobalRecordingTableReceiver {
        inline app::IGlobalRecordingTableReceiver__Class** type_info() {
            static app::IGlobalRecordingTableReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGlobalRecordingTableReceiver__Class**)(modloader::win::memory::resolve_rva(0x04744108));
            }
            return cache;
        }
        inline app::IGlobalRecordingTableReceiver__Class* get_class() {
            return il2cpp::get_class<app::IGlobalRecordingTableReceiver__Class>(type_info(), "", "IGlobalRecordingTableReceiver");
        }
    } // namespace IGlobalRecordingTableReceiver
} // namespace app::classes::types
