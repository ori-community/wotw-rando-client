#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rijndael_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rijndael_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rijndael_DEFINED)
#include <Modloader/app/structs/Rijndael__Fields.h>
#if defined(IL2CPP_STRUCT_Rijndael__Fields_DEFINED)
#define IL2CPP_STRUCT_Rijndael_DEFINED
struct Rijndael__Class;
struct Rijndael {
    struct Rijndael__Class* klass;
    MonitorData* monitor;
    struct Rijndael__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rijndael_FWDDECL)
#define IL2CPP_STRUCT_Rijndael_FWDDECL
#include <Modloader/app/structs/Rijndael__Class.h>
#endif
#undef IL2CPP_STRUCT_Rijndael_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rijndael_DEFINED) && !defined(IL2CPP_STRUCT_Rijndael_FWDDECL)
#include <Modloader/app/structs/Rijndael.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rijndael.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
