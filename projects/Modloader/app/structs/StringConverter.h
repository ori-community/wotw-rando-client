#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringConverter_DEFINED)
#define IL2CPP_STRUCT_StringConverter_DEFINED
struct StringConverter__Class;
struct StringConverter {
    struct StringConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StringConverter_FWDDECL)
#define IL2CPP_STRUCT_StringConverter_FWDDECL
#include <Modloader/app/structs/StringConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_StringConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringConverter_DEFINED) && !defined(IL2CPP_STRUCT_StringConverter_FWDDECL)
#include <Modloader/app/structs/StringConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
