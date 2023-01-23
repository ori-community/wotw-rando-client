#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XMLDiffLoader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XMLDiffLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XMLDiffLoader_DEFINED)
#include <Modloader/app/structs/XMLDiffLoader__Fields.h>
#if defined(IL2CPP_STRUCT_XMLDiffLoader__Fields_DEFINED)
#define IL2CPP_STRUCT_XMLDiffLoader_DEFINED
struct XMLDiffLoader__Class;
struct XMLDiffLoader {
    struct XMLDiffLoader__Class* klass;
    MonitorData* monitor;
    struct XMLDiffLoader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XMLDiffLoader_FWDDECL)
#define IL2CPP_STRUCT_XMLDiffLoader_FWDDECL
#include <Modloader/app/structs/XMLDiffLoader__Class.h>
#endif
#undef IL2CPP_STRUCT_XMLDiffLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XMLDiffLoader_DEFINED) && !defined(IL2CPP_STRUCT_XMLDiffLoader_FWDDECL)
#include <Modloader/app/structs/XMLDiffLoader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XMLDiffLoader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
