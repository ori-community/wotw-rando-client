#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_DEFINED)
#include <Modloader/app/structs/JsonBuilder_Slot.h>
#if defined(IL2CPP_STRUCT_JsonBuilder_Slot_DEFINED)
#define IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_DEFINED
struct JsonBuilder_Slot__Class;
struct JsonBuilder_Slot__Boxed {
    struct JsonBuilder_Slot__Class* klass;
    MonitorData* monitor;
    struct JsonBuilder_Slot fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_FWDDECL
#include <Modloader/app/structs/JsonBuilder_Slot__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JsonBuilder_Slot__Boxed_FWDDECL)
#include <Modloader/app/structs/JsonBuilder_Slot__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonBuilder_Slot__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
