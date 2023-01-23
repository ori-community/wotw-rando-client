#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cursor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cursor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cursor_DEFINED)
#define IL2CPP_STRUCT_Cursor_DEFINED
struct Cursor__Class;
struct Cursor {
    struct Cursor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Cursor_FWDDECL)
#define IL2CPP_STRUCT_Cursor_FWDDECL
#include <Modloader/app/structs/Cursor__Class.h>
#endif
#undef IL2CPP_STRUCT_Cursor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cursor_DEFINED) && !defined(IL2CPP_STRUCT_Cursor_FWDDECL)
#include <Modloader/app/structs/Cursor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cursor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
