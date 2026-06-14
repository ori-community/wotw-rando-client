#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextStyleCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextStyleCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextStyleCollection_DEFINED)
#include <Modloader/app/structs/TextStyleCollection__Fields.h>
#if defined(IL2CPP_STRUCT_TextStyleCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_TextStyleCollection_DEFINED
struct TextStyleCollection__Class;
struct TextStyleCollection {
    struct TextStyleCollection__Class* klass;
    MonitorData* monitor;
    struct TextStyleCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextStyleCollection_FWDDECL)
#define IL2CPP_STRUCT_TextStyleCollection_FWDDECL
#include <Modloader/app/structs/TextStyleCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_TextStyleCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextStyleCollection_DEFINED) && !defined(IL2CPP_STRUCT_TextStyleCollection_FWDDECL)
#include <Modloader/app/structs/TextStyleCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextStyleCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
