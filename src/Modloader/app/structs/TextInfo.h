#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfo_DEFINED)
#include <Modloader/app/structs/TextInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TextInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TextInfo_DEFINED
struct TextInfo__Class;
struct TextInfo {
    struct TextInfo__Class* klass;
    MonitorData* monitor;
    struct TextInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextInfo_FWDDECL)
#define IL2CPP_STRUCT_TextInfo_FWDDECL
#include <Modloader/app/structs/TextInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_TextInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfo_DEFINED) && !defined(IL2CPP_STRUCT_TextInfo_FWDDECL)
#include <Modloader/app/structs/TextInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
