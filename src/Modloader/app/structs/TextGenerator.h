#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerator_DEFINED)
#include <Modloader/app/structs/TextGenerator__Fields.h>
#if defined(IL2CPP_STRUCT_TextGenerator__Fields_DEFINED)
#define IL2CPP_STRUCT_TextGenerator_DEFINED
struct TextGenerator__Class;
struct TextGenerator {
    struct TextGenerator__Class* klass;
    MonitorData* monitor;
    struct TextGenerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextGenerator_FWDDECL)
#define IL2CPP_STRUCT_TextGenerator_FWDDECL
#include <Modloader/app/structs/TextGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_TextGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerator_DEFINED) && !defined(IL2CPP_STRUCT_TextGenerator_FWDDECL)
#include <Modloader/app/structs/TextGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
