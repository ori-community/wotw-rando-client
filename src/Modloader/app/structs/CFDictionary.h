#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFDictionary_DEFINED)
#include <Modloader/app/structs/CFDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_CFDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_CFDictionary_DEFINED
struct CFDictionary__Class;
struct CFDictionary {
    struct CFDictionary__Class* klass;
    MonitorData* monitor;
    struct CFDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFDictionary_FWDDECL)
#define IL2CPP_STRUCT_CFDictionary_FWDDECL
#include <Modloader/app/structs/CFDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_CFDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFDictionary_DEFINED) && !defined(IL2CPP_STRUCT_CFDictionary_FWDDECL)
#include <Modloader/app/structs/CFDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
