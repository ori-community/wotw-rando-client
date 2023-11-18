#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_DEFINED)
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_DEFINED
struct LoadIntroLogosPrewarmOperation;
struct ActivateIntroLogosPrewarmOperation__Fields {
    struct BasePrewarmOperation__Fields _;
    struct LoadIntroLogosPrewarmOperation* m_loadIntroOp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_FWDDECL
#include <Modloader/app/structs/LoadIntroLogosPrewarmOperation.h>
#endif
#undef IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateIntroLogosPrewarmOperation__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateIntroLogosPrewarmOperation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateIntroLogosPrewarmOperation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
