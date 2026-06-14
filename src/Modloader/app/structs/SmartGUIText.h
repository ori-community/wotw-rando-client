#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmartGUIText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmartGUIText_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmartGUIText_DEFINED)
#define IL2CPP_STRUCT_SmartGUIText_DEFINED
struct SmartGUIText__Class;
struct SmartGUIText {
    struct SmartGUIText__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SmartGUIText_FWDDECL)
#define IL2CPP_STRUCT_SmartGUIText_FWDDECL
#include <Modloader/app/structs/SmartGUIText__Class.h>
#endif
#undef IL2CPP_STRUCT_SmartGUIText_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmartGUIText_DEFINED) && !defined(IL2CPP_STRUCT_SmartGUIText_FWDDECL)
#include <Modloader/app/structs/SmartGUIText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmartGUIText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
