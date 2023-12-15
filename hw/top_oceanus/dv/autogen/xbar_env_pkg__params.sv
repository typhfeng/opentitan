// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// xbar_env_pkg__params generated by `topgen.py` tool


// List of Xbar device memory map
tl_device_t xbar_devices[$] = '{
    '{"rv_dm__regs", '{
        '{32'h41200000, 32'h41200003}
    }},
    '{"rv_dm__mem", '{
        '{32'h00010000, 32'h00010fff}
    }},
    '{"rom_ctrl__rom", '{
        '{32'h00008000, 32'h0000ffff}
    }},
    '{"rom_ctrl__regs", '{
        '{32'h411e0000, 32'h411e007f}
    }},
    '{"spi_host0", '{
        '{32'h40300000, 32'h4030003f}
    }},
    '{"flash_ctrl__core", '{
        '{32'h41000000, 32'h410001ff}
    }},
    '{"flash_ctrl__prim", '{
        '{32'h41008000, 32'h4100807f}
    }},
    '{"flash_ctrl__mem", '{
        '{32'h20000000, 32'h200fffff}
    }},
    '{"rv_plic", '{
        '{32'h48000000, 32'h4fffffff}
    }},
    '{"rv_core_ibex__cfg", '{
        '{32'h411f0000, 32'h411f00ff}
    }},
    '{"sram_ctrl_main__regs", '{
        '{32'h411c0000, 32'h411c001f}
    }},
    '{"sram_ctrl_main__ram", '{
        '{32'h10000000, 32'h1001ffff}
    }},
    '{"uart0", '{
        '{32'h44000000, 32'h4400003f}
    }},
    '{"i2c0", '{
        '{32'h40080000, 32'h4008007f}
    }},
    '{"pwm_aon", '{
        '{32'h40450000, 32'h4045007f}
    }},
    '{"gpio", '{
        '{32'h40040000, 32'h4004003f}
    }},
    '{"spi_device", '{
        '{32'h40050000, 32'h40051fff}
    }},
    '{"rv_timer", '{
        '{32'h40100000, 32'h401001ff}
    }},
    '{"pwrmgr_aon", '{
        '{32'h40400000, 32'h4040007f}
    }},
    '{"rstmgr_aon", '{
        '{32'h40410000, 32'h4041007f}
    }},
    '{"clkmgr_aon", '{
        '{32'h40420000, 32'h4042007f}
    }},
    '{"pinmux_aon", '{
        '{32'h40460000, 32'h40460fff}
    }},
    '{"otp_ctrl__core", '{
        '{32'h40130000, 32'h40131fff}
    }},
    '{"otp_ctrl__prim", '{
        '{32'h40132000, 32'h4013201f}
    }},
    '{"lc_ctrl", '{
        '{32'h40140000, 32'h401400ff}
    }},
    '{"sram_ctrl_ret_aon__regs", '{
        '{32'h40500000, 32'h4050001f}
    }},
    '{"sram_ctrl_ret_aon__ram", '{
        '{32'h40600000, 32'h406fffff}
    }},
    '{"aon_timer_aon", '{
        '{32'h40470000, 32'h4047003f}
    }},
    '{"sysrst_ctrl_aon", '{
        '{32'h40430000, 32'h404300ff}
    }},
    '{"adc_ctrl_aon", '{
        '{32'h40440000, 32'h4044007f}
    }},
    '{"ast", '{
        '{32'h40480000, 32'h404803ff}
    }}};

  // List of Xbar hosts
tl_host_t xbar_hosts[$] = '{
    '{"rv_core_ibex__corei", 0, '{
        "rom_ctrl__rom",
        "rv_dm__mem",
        "sram_ctrl_main__ram",
        "flash_ctrl__mem"}}
    ,
    '{"rv_core_ibex__cored", 1, '{
        "rom_ctrl__rom",
        "rom_ctrl__regs",
        "rv_dm__mem",
        "rv_dm__regs",
        "sram_ctrl_main__ram",
        "uart0",
        "i2c0",
        "gpio",
        "spi_device",
        "rv_timer",
        "pwrmgr_aon",
        "rstmgr_aon",
        "clkmgr_aon",
        "pinmux_aon",
        "otp_ctrl__core",
        "otp_ctrl__prim",
        "lc_ctrl",
        "ast",
        "sram_ctrl_ret_aon__ram",
        "sram_ctrl_ret_aon__regs",
        "aon_timer_aon",
        "adc_ctrl_aon",
        "sysrst_ctrl_aon",
        "pwm_aon",
        "spi_host0",
        "flash_ctrl__core",
        "flash_ctrl__prim",
        "flash_ctrl__mem",
        "rv_plic",
        "sram_ctrl_main__regs",
        "rv_core_ibex__cfg"}}
    ,
    '{"rv_dm__sba", 2, '{
        "rom_ctrl__rom",
        "rom_ctrl__regs",
        "rv_dm__mem",
        "rv_dm__regs",
        "sram_ctrl_main__ram",
        "uart0",
        "i2c0",
        "gpio",
        "spi_device",
        "rv_timer",
        "pwrmgr_aon",
        "rstmgr_aon",
        "clkmgr_aon",
        "pinmux_aon",
        "otp_ctrl__core",
        "otp_ctrl__prim",
        "lc_ctrl",
        "ast",
        "sram_ctrl_ret_aon__ram",
        "sram_ctrl_ret_aon__regs",
        "aon_timer_aon",
        "adc_ctrl_aon",
        "sysrst_ctrl_aon",
        "pwm_aon",
        "spi_host0",
        "flash_ctrl__core",
        "flash_ctrl__prim",
        "flash_ctrl__mem",
        "rv_plic",
        "sram_ctrl_main__regs",
        "rv_core_ibex__cfg"}}
};
