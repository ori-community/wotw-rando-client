#pragma once
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data__Boxed.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostGenericEventsPlugin_Data {
        inline app::GhostGenericEventsPlugin_Data__Class** type_info() {
            static app::GhostGenericEventsPlugin_Data__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostGenericEventsPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04790588));
            }
            return cache;
        }
        inline app::GhostGenericEventsPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostGenericEventsPlugin_Data__Class>(type_info(), "", "GhostGenericEventsPlugin", "Data");
        }
        inline app::GhostGenericEventsPlugin_Data* create() {
            return il2cpp::create_object<app::GhostGenericEventsPlugin_Data>(get_class());
        }
        inline app::GhostGenericEventsPlugin_Data__Boxed* box(app::GhostGenericEventsPlugin_Data value) {
            return il2cpp::box_value<app::GhostGenericEventsPlugin_Data__Boxed>(get_class(), value);
        }
    } // namespace GhostGenericEventsPlugin_Data
} // namespace app::classes::types
