#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureMaskEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureMaskEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureMaskEntry_DEFINED)
#include <Modloader/app/structs/TextureMaskEntry__Fields.h>
#if defined(IL2CPP_STRUCT_TextureMaskEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureMaskEntry_DEFINED
struct TextureMaskEntry__Class;
struct TextureMaskEntry {
    struct TextureMaskEntry__Class* klass;
    MonitorData* monitor;
    struct TextureMaskEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureMaskEntry_FWDDECL)
#define IL2CPP_STRUCT_TextureMaskEntry_FWDDECL
#include <Modloader/app/structs/TextureMaskEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_TextureMaskEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureMaskEntry_DEFINED) && !defined(IL2CPP_STRUCT_TextureMaskEntry_FWDDECL)
#include <Modloader/app/structs/TextureMaskEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureMaskEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
